// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCRDTGENERATION_H
#define WBSCRDTGENERATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSCRDTGeneration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly, nonatomic) BOOL isValid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)incrementedGenerationWithDeviceIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceIdentifier:(id)arg0 generation:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
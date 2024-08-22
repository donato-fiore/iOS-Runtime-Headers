// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSYMPTOM_H
#define HMSYMPTOM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSymptom : NSObject <NSSecureCoding>



@property (readonly, copy) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)archive:(id)arg0 ;
+(id)archiveSymptomDict:(id)arg0 ;
+(id)symptomWithType:(NSInteger)arg0 ;
+(id)unarchive:(id)arg0 ;
+(id)unarchiveSymptomDict:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
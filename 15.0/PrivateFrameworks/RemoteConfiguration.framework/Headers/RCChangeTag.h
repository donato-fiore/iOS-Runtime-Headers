// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCCHANGETAG_H
#define RCCHANGETAG_H

@class NSString;
@protocol RCSerializable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RCChangeTag : NSObject <RCSerializable, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *contentHash; // ivar: _contentHash
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *lastModifiedString; // ivar: _lastModifiedString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 contentHash:(id)arg1 lastModifiedString:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
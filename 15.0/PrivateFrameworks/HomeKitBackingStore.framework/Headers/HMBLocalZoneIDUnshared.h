// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALZONEIDUNSHARED_H
#define HMBLOCALZONEIDUNSHARED_H

@class HMFObject, NSString, NSArray, NSData;
@protocol HMBLocalZoneID;



@interface HMBLocalZoneIDUnshared : HMFObject <HMBLocalZoneID>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *token;


+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 ;


@end


#endif
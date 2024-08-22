// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFASSERTION_H
#define CARPFASSERTION_H

@class NSString;
@protocol CARPFLogging;


#import "CARPFObject.h"

@interface CARPFAssertion : CARPFObject <CARPFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy) NSString *uniqueDescription;
@property (readonly, getter=isValid) BOOL valid; // ivar: _valid


+(id)bundleIdentifier;
+(id)logCategory;
-(BOOL)acquire:(*id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)invalidate;
-(void)mark;


@end


#endif
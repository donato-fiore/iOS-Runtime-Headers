// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSYSTEMNOTESTAKESCREENSHOTRESULT_H
#define SBSSYSTEMNOTESTAKESCREENSHOTRESULT_H

@class NSString, FBSDisplayIdentity, BSMachPortSendRight;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface SBSSystemNotesTakeScreenshotResult : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSMachPortSendRight *machPortSendRight; // ivar: _machPortSendRight
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)initWithDisplay:(id)arg0 sendRight:(id)arg1 scale:(CGFloat)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
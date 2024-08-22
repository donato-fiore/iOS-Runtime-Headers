// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSWORKSPACERESPONSE_H
#define FBSWORKSPACERESPONSE_H

@class NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>

#import "FBSSceneMessage.h"

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) FBSSceneMessage *message; // ivar: _message
@property (readonly) Class superclass;


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
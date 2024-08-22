// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXNSEXTENSIONSHIMSCENE_H
#define _EXNSEXTENSIONSHIMSCENE_H

@class NSExtensionContext, NSString;
@protocol _EXScene;

#import <Foundation/Foundation.h>


@interface _EXNSExtensionShimScene : NSObject <_EXScene>



@property (retain) NSExtensionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain) id *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(id)init;
-(id)makePrincipalObjectForExtension:(id)arg0 ;
-(void)connectToSession:(id)arg0 ;
-(void)dealloc;


@end


#endif
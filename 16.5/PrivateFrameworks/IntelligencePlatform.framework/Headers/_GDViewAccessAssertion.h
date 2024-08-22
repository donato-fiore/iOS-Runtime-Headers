// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDVIEWACCESSASSERTION_H
#define _GDVIEWACCESSASSERTION_H

@class NSString, NSURL;
@protocol GDViewAccessAssertion;

#import <Foundation/Foundation.h>


@interface _GDViewAccessAssertion : NSObject <GDViewAccessAssertion>

 {
    NSInteger _handle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *viewArtifactTableName; // ivar: _viewArtifactTableName
@property (readonly, nonatomic) NSURL *viewArtifactURL; // ivar: _viewArtifactURL
@property (readonly, nonatomic) NSString *viewName; // ivar: _viewName


-(id)initWithViewName:(id)arg0 extensionToken:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif
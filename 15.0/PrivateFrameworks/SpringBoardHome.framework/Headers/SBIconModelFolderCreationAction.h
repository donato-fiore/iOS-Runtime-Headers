// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONMODELFOLDERCREATIONACTION_H
#define SBICONMODELFOLDERCREATIONACTION_H

@class NSString, NSIndexPath;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFolder.h"

@interface SBIconModelFolderCreationAction : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBFolder *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFolder:(id)arg0 indexPath:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
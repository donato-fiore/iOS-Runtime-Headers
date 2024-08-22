// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHFOCUSMODE_H
#define SBHFOCUSMODE_H

@class NSString;
@protocol SBFolderObserver;

#import <Foundation/Foundation.h>

#import "SBFolder.h"

@interface SBHFocusMode : NSObject <SBFolderObserver>



@property (readonly, nonatomic) BOOL customizedHomeScreenPagesEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFolder *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbol; // ivar: _symbol


-(BOOL)wantsListVisible:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 folder:(id)arg1 ;
-(void)addToList:(id)arg0 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)removeFromList:(id)arg0 ;


@end


#endif
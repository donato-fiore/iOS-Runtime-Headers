// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSIDEBARENABLEMENTOBSERVER_H
#define PXSHAREDLIBRARYSIDEBARENABLEMENTOBSERVER_H

@class NSString;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>


@interface PXSharedLibrarySidebarEnablementObserver : NSObject <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showSharedLibrarySidebarItem; // ivar: _showSharedLibrarySidebarItem
@property (readonly) Class superclass;


-(id)init;
-(void)_update;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif
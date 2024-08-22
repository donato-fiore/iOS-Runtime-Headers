// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMAPPER_H
#define CMMAPPER_H

@class NSString;
@protocol CMMapperRootArchiver;

#import <Foundation/Foundation.h>

#import "CMMapper.h"
#import "OCDDocument.h"
#import "CMArchiveManager.h"

@interface CMMapper : NSObject <CMMapperRootArchiver>

 {
    CMMapper *mRoot;
    OCDDocument *_document;
    CMArchiveManager *mArchiver;
}


@property (readonly) OCDDocument *document;
@property (retain) NSString *fileName; // ivar: _fileName
@property (readonly, weak) CMMapper *parent; // ivar: mParent


-(id)archiver;
-(id)init;
-(id)initWithParent:(id)arg0 ;
-(id)root;
-(void)addAttribute:(id)arg0 toNode:(id)arg1 value:(id)arg2 ;
-(void)addStyle:(id)arg0 withName:(id)arg1 ;
-(void)addStyleUsingGlobalCacheTo:(id)arg0 style:(id)arg1 ;
-(void)addStyleUsingGlobalCacheTo:(id)arg0 style:(id)arg1 embedStyle:(BOOL)arg2 ;
-(void)finishMappingWithState:(id)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapElement:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)mapStylesheetAt:(id)arg0 stylesheet:(id)arg1 ;
-(void)mapWithState:(id)arg0 ;
-(void)startMappingWithState:(id)arg0 ;


@end


#endif
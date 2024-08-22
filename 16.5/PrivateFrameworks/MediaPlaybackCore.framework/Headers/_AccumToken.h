// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ACCUMTOKEN_H
#define _ACCUMTOKEN_H

@class NSIndexPath;

#import <Foundation/Foundation.h>


@interface _AccumToken : NSObject

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (retain, nonatomic) id *lodToken; // ivar: _lodToken
@property (retain, nonatomic) id *sodToken; // ivar: _sodToken


+(id)tokenWithIndexPath:(id)arg0 sod:(id)arg1 lod:(id)arg2 ;
-(id)description;


@end


#endif
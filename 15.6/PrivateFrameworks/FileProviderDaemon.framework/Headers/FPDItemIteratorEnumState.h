// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDITEMITERATORENUMSTATE_H
#define FPDITEMITERATORENUMSTATE_H

@class NSData, FPItem;
@protocol FPXPCAutomaticErrorProxy><FPXEnumerator;

#import <Foundation/Foundation.h>


@interface FPDItemIteratorEnumState : NSObject

@property (retain, nonatomic) NSObject<FPXPCAutomaticErrorProxy><FPXEnumerator> *enumerator; // ivar: _enumerator
@property (retain, nonatomic) NSData *nextPage; // ivar: _nextPage
@property (retain, nonatomic) FPItem *parentItem; // ivar: _parentItem




@end


#endif
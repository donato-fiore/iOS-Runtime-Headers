// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNHINTCACHEENTRY_H
#define TNHINTCACHEENTRY_H

@protocol TSDHint;

#import <Foundation/Foundation.h>


@interface TNHintCacheEntry : NSObject

@property (retain) NSObject<TSDHint> *hint; // ivar: mHint
@property CGPoint origin; // ivar: mOrigin
@property (getter=isValid) BOOL valid; // ivar: mIsValid


-(id)initWithHint:(id)arg0 origin:(struct CGPoint )arg1 ;
-(void)dealloc;


@end


#endif
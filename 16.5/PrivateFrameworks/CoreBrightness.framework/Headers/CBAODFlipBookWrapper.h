// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBAODFLIPBOOKWRAPPER_H
#define CBAODFLIPBOOKWRAPPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CBAODFlipBookWrapper : NSObject {
    NSMutableArray *_flipBookData;
}


@property (readonly, nonatomic) NSUInteger entryCount;
@property (readonly, nonatomic) ? header; // ivar: _header
@property (readonly, nonatomic) ? origin; // ivar: _origin
@property (nonatomic) CGFloat submissionTimestamp; // ivar: _submissionTimestamp


-(BOOL)getEntry:(struct ? *)arg0 forID:(NSInteger)arg1 ;
-(BOOL)isValidEntryID:(NSInteger)arg0 ;
-(id)description;
-(id)initWithHeader:(struct ? )arg0 andOrigin:(struct ? )arg1 ;
-(id)newFlipBookData;
-(void)appendFlipBookEntry:(struct ? *)arg0 ;
-(void)dealloc;


@end


#endif
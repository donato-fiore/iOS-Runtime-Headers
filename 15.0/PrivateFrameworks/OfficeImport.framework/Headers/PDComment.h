// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDCOMMENT_H
#define PDCOMMENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "PDComment.h"

@interface PDComment : NSObject {
    CGPoint mPosition;
    NSString *mText;
    NSUInteger mAuthorId;
    NSDate *mDate;
    unsigned int mIndex;
}


@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain) PDComment *parent; // ivar: parent


-(id)date;
-(id)description;
-(id)init;
-(id)text;
-(struct CGPoint )position;
-(unsigned int)index;
-(void)setDate:(id)arg0 ;
-(void)setIndex:(unsigned int)arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif
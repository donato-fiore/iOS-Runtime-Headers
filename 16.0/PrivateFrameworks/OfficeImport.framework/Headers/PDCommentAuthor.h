// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDCOMMENTAUTHOR_H
#define PDCOMMENTAUTHOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}




-(id)description;
-(id)init;
-(id)initials;
-(id)name;
-(unsigned int)colorIndex;
-(unsigned int)id;
-(unsigned int)lastCommentIndex;
-(void)setColorIndex:(unsigned int)arg0 ;
-(void)setId:(unsigned int)arg0 ;
-(void)setInitials:(id)arg0 ;
-(void)setLastCommentIndex:(unsigned int)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif
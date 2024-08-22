// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASCOMMENTCHANGE_H
#define MSASCOMMENTCHANGE_H


#import <Foundation/Foundation.h>

#import "MSASComment.h"

@interface MSASCommentChange : NSObject

@property (retain, nonatomic) MSASComment *comment; // ivar: _comment
@property (nonatomic) int deletionIndex; // ivar: _deletionIndex
@property (nonatomic) int type; // ivar: _type


-(id)description;


@end


#endif
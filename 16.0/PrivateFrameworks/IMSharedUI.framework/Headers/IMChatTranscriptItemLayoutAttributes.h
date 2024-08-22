// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCHATTRANSCRIPTITEMLAYOUTATTRIBUTES_H
#define IMCHATTRANSCRIPTITEMLAYOUTATTRIBUTES_H

@class NSIndexPath;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IMChatTranscriptItemLayoutAttributes : NSObject <NSCopying>



@property (nonatomic) CGRect frame; // ivar: _frame
@property (copy, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) CGSize size; // ivar: _size


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
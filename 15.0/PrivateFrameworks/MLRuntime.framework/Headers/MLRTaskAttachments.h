// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLRTASKATTACHMENTS_H
#define MLRTASKATTACHMENTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MLRTaskAttachments : NSObject

@property (readonly, copy, nonatomic) NSArray *attachmentURLs; // ivar: _attachmentURLs
@property (readonly, nonatomic) NSUInteger count; // ivar: _count


-(id)attachmentURLsForBasename:(id)arg0 ;
-(id)description;
-(id)initWithDESRecipe:(id)arg0 ;
-(id)initWithURLs:(id)arg0 ;


@end


#endif
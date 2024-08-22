// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXCACHEDCLIPBOARDCONTENTS_H
#define _ATXCACHEDCLIPBOARDCONTENTS_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _ATXCachedClipboardContents : NSObject

@property (readonly, nonatomic) NSString *content; // ivar: _content
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSString *originatorBundleId; // ivar: _originatorBundleId


-(id)initWithContent:(id)arg0 creationDate:(id)arg1 originatorBundleId:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCONFERENCEINVALIDATIONRECORD_H
#define EKCONFERENCEINVALIDATIONRECORD_H

@class NSMutableSet, NSURL, NSMutableArray;

#import <Foundation/Foundation.h>


@interface EKConferenceInvalidationRecord : NSObject

@property (retain, nonatomic) NSMutableSet *replacementForURLs; // ivar: _replacementForURLs
@property (retain, nonatomic) NSURL *validURL; // ivar: _validURL
@property (retain, nonatomic) NSMutableArray *waitingCompletionHandlers; // ivar: _waitingCompletionHandlers


-(void)finishWithURL:(id)arg0 error:(id)arg1 ;
-(void)generateNewValidURLForOriginalURL:(id)arg0 ;


@end


#endif
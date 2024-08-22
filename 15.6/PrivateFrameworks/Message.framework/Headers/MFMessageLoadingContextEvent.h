// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGELOADINGCONTEXTEVENT_H
#define MFMESSAGELOADINGCONTEXTEVENT_H

@class NSArray, NSError, MFMimeBody, MFMimePart;

#import <Foundation/Foundation.h>

#import "MFMessageLoadingContext.h"
#import "MFMailMessage.h"

@interface MFMessageLoadingContextEvent : NSObject

@property (copy, nonatomic) NSArray *content; // ivar: _content
@property (weak, nonatomic) MFMessageLoadingContext *context; // ivar: _context
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL hasLoadedBestAlternativePart; // ivar: _hasLoadedBestAlternativePart
@property (nonatomic) BOOL hasLoadedCompleteBody; // ivar: _hasLoadedCompleteBody
@property (retain, nonatomic) MFMimeBody *loadedBody; // ivar: _loadedBody
@property (retain, nonatomic) MFMimePart *loadedPart; // ivar: _loadedPart
@property (readonly, nonatomic) MFMailMessage *message;
@property (nonatomic) NSUInteger remainingBytes; // ivar: _remainingBytes
@property (readonly, nonatomic) NSError *smimeError;
@property (nonatomic) NSInteger transportType; // ivar: _transportType


-(id)_descriptionForDebugging:(BOOL)arg0 ;
-(id)debugDescription;
-(id)description;


@end


#endif
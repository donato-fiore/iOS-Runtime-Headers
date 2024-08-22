// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLFEEDBACKMESSAGE_H
#define CPLFEEDBACKMESSAGE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "CPLServerFeedbackMessage.h"

@interface CPLFeedbackMessage : NSObject {
    NSDate *_creationDate;
}


@property (readonly, nonatomic) NSString *feedbackType; // ivar: _feedbackType
@property (readonly, nonatomic) NSString *libraryIdentifier; // ivar: _libraryIdentifier
@property (readonly, nonatomic) NSString *libraryIdentifierDescription;
@property (readonly, nonatomic) CPLServerFeedbackMessage *serverMessage;


-(id)initWithLibraryIdentifier:(id)arg0 ;


@end


#endif
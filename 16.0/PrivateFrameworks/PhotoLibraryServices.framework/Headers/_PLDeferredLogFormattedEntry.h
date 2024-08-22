// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PLDEFERREDLOGFORMATTEDENTRY_H
#define _PLDEFERREDLOGFORMATTEDENTRY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface _PLDeferredLogFormattedEntry : NSObject

@property (nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *entityDescription; // ivar: _entityDescription
@property (retain, nonatomic) NSString *logType; // ivar: _logType
@property (nonatomic) NSUInteger objectPointer; // ivar: _objectPointer




@end


#endif
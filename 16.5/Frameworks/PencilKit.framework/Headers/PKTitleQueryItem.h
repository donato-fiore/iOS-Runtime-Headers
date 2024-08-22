// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTITLEQUERYITEM_H
#define PKTITLEQUERYITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKTitleQueryItem : NSObject

@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NSString *transcribedTitle; // ivar: _transcribedTitle


-(id)initWithTranscribedTitle:(id)arg0 bounds:(struct CGRect )arg1 ;


@end


#endif
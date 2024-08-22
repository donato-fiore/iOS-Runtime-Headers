// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPASTEBOARDOPTIONS_H
#define _UIPASTEBOARDOPTIONS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _UIPasteboardOptions : NSObject

@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic, getter=isLocalOnly) BOOL localOnly; // ivar: _localOnly
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned


+(id)optionsWithDictionary:(id)arg0 ;
-(id)initWithOptionsDictionary:(id)arg0 ;


@end


#endif
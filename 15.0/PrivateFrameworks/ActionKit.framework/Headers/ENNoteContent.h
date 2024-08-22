// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENNOTECONTENT_H
#define ENNOTECONTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ENNoteContent : NSObject

@property (copy, nonatomic) NSString *emml; // ivar: _emml


+(id)noteContentWithContentArray:(id)arg0 ;
+(id)noteContentWithENML:(id)arg0 ;
+(id)noteContentWithSanitizedHTML:(id)arg0 ;
+(id)noteContentWithString:(id)arg0 ;
-(id)enml;
-(id)enmlWithNote:(id)arg0 ;
-(id)initWithENML:(id)arg0 ;


@end


#endif
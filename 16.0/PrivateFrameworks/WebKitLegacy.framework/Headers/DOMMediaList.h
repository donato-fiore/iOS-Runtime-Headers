// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMMEDIALIST_H
#define DOMMEDIALIST_H

@class NSString;


#import "DOMObject.h"

@interface DOMMediaList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *mediaText;


-(id)item:(unsigned int)arg0 ;
-(void)appendMedium:(id)arg0 ;
-(void)dealloc;
-(void)deleteMedium:(id)arg0 ;


@end


#endif
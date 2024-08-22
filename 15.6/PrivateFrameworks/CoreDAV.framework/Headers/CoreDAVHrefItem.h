// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVHREFITEM_H
#define COREDAVHREFITEM_H

@class NSURL;


#import "CoreDAVLeafItem.h"

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) int writeStyle; // ivar: _writeStyle


-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 baseURL:(id)arg1 ;
-(id)payloadAsFullURL;
-(id)payloadAsOriginalURL;
-(void)parserSuggestsBaseURL:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif
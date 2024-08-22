// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBUSERCONTENTURLPATTERN_H
#define WEBUSERCONTENTURLPATTERN_H


#import <Foundation/Foundation.h>

#import "WebUserContentURLPatternPrivate.h"

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}




-(BOOL)isValid;
-(BOOL)matchesSubdomains;
-(BOOL)matchesURL:(id)arg0 ;
-(id)host;
-(id)initWithPatternString:(id)arg0 ;
-(id)scheme;
-(void)dealloc;


@end


#endif
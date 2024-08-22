// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI237NEWSWEBARCHIVEURLSCHEMEHANDLERFACTORY_H
#define _TTC7NEWSUI237NEWSWEBARCHIVEURLSCHEMEHANDLERFACTORY_H

@protocol SWURLSchemeHandlerFactory;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI237NewsWebArchiveURLSchemeHandlerFactory : NSObject <SWURLSchemeHandlerFactory>

 {
    ? webArchiveService;
}




-(id)createURLSchemeHandlerWithTask:(id)arg0 ;
-(id)init;


@end


#endif
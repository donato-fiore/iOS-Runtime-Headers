// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING8DUCLIENT_H
#define _TTC21DOCUMENTUNDERSTANDING8DUCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding8DUClient : NSObject {
    ? identifier;
    ? scheduler;
    ? topLevelSpecifications;
}


@property (nonatomic, readonly) NSString *identifier;


-(?)handleDocumentUpdateWithDocumentUpdatecompletionHandler;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif
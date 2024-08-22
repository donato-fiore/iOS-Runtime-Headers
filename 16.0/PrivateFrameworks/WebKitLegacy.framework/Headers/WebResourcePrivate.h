// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBRESOURCEPRIVATE_H
#define WEBRESOURCEPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebResourcePrivate : NSObject {
    RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> coreResource;
}




+(void)initialize;
-(id)init;
-(id)initWithCoreResource:(*void)arg0 ;
-(void)dealloc;


@end


#endif
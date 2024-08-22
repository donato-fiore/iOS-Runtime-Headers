// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERVNODEDISPATCHSOURCE_H
#define _UIDOCUMENTPICKERVNODEDISPATCHSOURCE_H

@class NSURL;
@protocol NSCopying, OS_dispatch_source, _UIDocumentPickerVnodeDispatchSourceDelegate;

#import <Foundation/Foundation.h>


@interface _UIDocumentPickerVnodeDispatchSource : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_source> *_source;
    id<_UIDocumentPickerVnodeDispatchSourceDelegate> *_target;
    NSURL *_url;
}


@property (readonly, nonatomic) NSURL *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTarget:(id)arg0 url:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)event;
-(void)invalidate;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKQLTHUMBNAILLOADOPERATION_H
#define WKQLTHUMBNAILLOADOPERATION_H

@class NSOperation, NSString, UIImage;



@interface WKQLThumbnailLoadOperation : NSOperation {
    RetainPtr<NSURL> _filePath;
    RetainPtr<NSString> _identifier;
    RetainPtr<NSFileWrapper> _fileWrapper;
    RetainPtr<UIImage> _thumbnail;
    BOOL _shouldWrite;
}


@property (readonly, getter=isAsynchronous) BOOL asynchronous;
@property (getter=isExecuting) BOOL executing; // ivar: _executing
@property (getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) UIImage *thumbnail;


-(id)initWithAttachment:(id)arg0 identifier:(id)arg1 ;
-(id)initWithURL:(id)arg0 identifier:(id)arg1 ;
-(void)start;


@end


#endif
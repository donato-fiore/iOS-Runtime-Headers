// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKTAPTORADARREQUEST_H
#define NPKTAPTORADARREQUEST_H

@class NSURL, NSSet, NSString;

#import <Foundation/Foundation.h>


@interface NPKTapToRadarRequest : NSObject {
    NSURL *_tapToRadarURL;
}


@property (readonly, nonatomic) NSSet *attachmentsPaths; // ivar: _attachmentsPaths
@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSURL *tapToRadarURL;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)canPostRequest;
+(void)postWithTitle:(id)arg0 body:(id)arg1 ;
-(id)_attachmentURLs;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 body:(id)arg1 ;
-(id)initWithTitle:(id)arg0 body:(id)arg1 attachmentPaths:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(void)post;


@end


#endif
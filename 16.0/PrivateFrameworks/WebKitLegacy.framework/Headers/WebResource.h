// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBRESOURCE_H
#define WEBRESOURCE_H

@class NSString, NSURL, NSData;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WebResourcePrivate.h"

@interface WebResource : NSObject <NSCoding, NSCopying>

 {
    WebResourcePrivate *_private;
}


@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *frameName;
@property (readonly, copy, nonatomic) NSString *textEncodingName;


-(id)_initWithCoreResource:(*void)arg0 ;
-(id)_initWithData:(id)arg0 URL:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 frameName:(id)arg4 response:(id)arg5 copyData:(BOOL)arg6 ;
-(id)_initWithData:(id)arg0 URL:(id)arg1 response:(id)arg2 ;
-(id)_response;
-(id)_stringValue;
-(id)_suggestedFilename;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 URL:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 frameName:(id)arg4 ;
-(struct NakedRef<WebCore::ArchiveResource> )_coreResource;
-(void)_ignoreWhenUnarchiving;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
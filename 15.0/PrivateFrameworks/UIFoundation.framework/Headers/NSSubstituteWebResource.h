// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSUBSTITUTEWEBRESOURCE_H
#define NSSUBSTITUTEWEBRESOURCE_H

@class NSData, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface NSSubstituteWebResource : NSObject {
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}




-(Class)_webResourceClass;
-(id)MIMEType;
-(id)URL;
-(id)data;
-(id)frameName;
-(id)initWithData:(id)arg0 URL:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 frameName:(id)arg4 ;
-(id)textEncodingName;
-(id)webResource;
-(void)dealloc;


@end


#endif
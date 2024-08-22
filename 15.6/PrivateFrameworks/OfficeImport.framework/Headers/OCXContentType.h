// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCXCONTENTTYPE_H
#define OCXCONTENTTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OCXContentType : NSObject {
    NSString *mExtension;
}


@property (readonly, nonatomic) NSString *contentType; // ivar: mContentType
@property (readonly, nonatomic) NSString *path; // ivar: mPath


-(BOOL)isOverride;
-(id)initWithContentType:(id)arg0 extension:(id)arg1 ;
-(id)initWithContentType:(id)arg0 path:(id)arg1 ;
-(void)writeToStreamWriter:(id)arg0 ;


@end


#endif
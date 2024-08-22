// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWEBSITEDATARECORD_H
#define WKWEBSITEDATARECORD_H

@class NSSet, NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "_WKWebsiteDataSize.h"

@interface WKWebsiteDataRecord : NSObject <WKObject>

 {
    ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) _WKWebsiteDataSize *_dataSize;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_originsStrings;
-(void)dealloc;


@end


#endif
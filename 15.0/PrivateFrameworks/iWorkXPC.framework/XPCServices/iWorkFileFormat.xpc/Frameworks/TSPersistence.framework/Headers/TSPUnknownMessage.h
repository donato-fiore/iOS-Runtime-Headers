// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPUNKNOWNMESSAGE_H
#define TSPUNKNOWNMESSAGE_H

@class NSArray, NSString;
@protocol TSPArchivableContent, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "TSPLazyReferenceArray.h"

@interface TSPUnknownMessage : NSObject <TSPArchivableContent>

 {
    MessageInfo _messageInfo;
}


@property (retain, nonatomic) NSArray *allData; // ivar: _allData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void fieldPath;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) BOOL isDiff;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *messageData; // ivar: _messageData
@property (readonly, nonatomic) NSUInteger messageVersion;
@property (retain, nonatomic) TSPLazyReferenceArray *objects; // ivar: _objects
@property (readonly) Class superclass;


-(*void)messageInfo;
-(id)init;
-(id)initWithMessageInfo:(*void)arg0 data:(id)arg1 ;


@end


#endif
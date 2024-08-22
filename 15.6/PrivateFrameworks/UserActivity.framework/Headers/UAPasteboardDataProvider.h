// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UAPASTEBOARDDATAPROVIDER_H
#define UAPASTEBOARDDATAPROVIDER_H

@class NSData, NSString, NSUUID;
@protocol UAPasteboardItemProviding;

#import <Foundation/Foundation.h>


@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithData:(id)arg0 type:(id)arg1 ;
-(void)getDataWithCompletionBlock:(id)arg0 ;


@end


#endif
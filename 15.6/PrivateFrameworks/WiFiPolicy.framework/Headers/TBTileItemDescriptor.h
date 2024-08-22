// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBTILEITEMDESCRIPTOR_H
#define TBTILEITEMDESCRIPTOR_H

@class NSString, NSNumber;
@protocol TBTileRequestItem;

#import <Foundation/Foundation.h>


@interface TBTileItemDescriptor : NSObject <TBTileRequestItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *etag; // ivar: _etag
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *key; // ivar: _key
@property (readonly) Class superclass;


+(id)tileItemDescriptorWithKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKey:(id)arg0 etag:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUMETADATAITEM_H
#define TUMETADATAITEM_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TUMetadataItem : NSObject

@property (readonly, nonatomic) NSMutableDictionary *callMetadata; // ivar: _callMetadata
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;


-(id)description;
-(id)init;
-(id)metadataForProvider:(Class)arg0 ;
-(void)setMetadata:(id)arg0 forProvider:(Class)arg1 ;


@end


#endif
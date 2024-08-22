// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCONTACTENTITYFEATURES_H
#define ATXCONTACTENTITYFEATURES_H

@protocol ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol>



@property (nonatomic) BOOL isFavoriteContact; // ivar: _isFavoriteContact
@property (nonatomic) BOOL isVIPContact; // ivar: _isVIPContact


-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif
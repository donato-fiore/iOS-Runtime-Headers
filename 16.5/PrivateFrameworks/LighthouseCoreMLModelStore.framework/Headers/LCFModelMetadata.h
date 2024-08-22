// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFMODELMETADATA_H
#define LCFMODELMETADATA_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface LCFModelMetadata : NSObject

@property (copy, nonatomic) NSDictionary *custom; // ivar: _custom
@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (copy, nonatomic) NSDate *dateTrained; // ivar: _dateTrained
@property (nonatomic) BOOL isAvailable; // ivar: _isAvailable
@property (nonatomic) BOOL isImported; // ivar: _isImported
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (nonatomic) BOOL isOriginalEmptyModel; // ivar: _isOriginalEmptyModel
@property (copy, nonatomic) NSString *sha256; // ivar: _sha256


-(id)init:(id)arg0 ;
-(id)toDictionary;


@end


#endif
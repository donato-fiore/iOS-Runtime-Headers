// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADDATAOBJECT_H
#define ADDATAOBJECT_H

@class NSDictionary, NSError, APOdmlServerResponse;

#import <Foundation/Foundation.h>


@interface ADDataObject : NSObject

@property (copy, nonatomic) NSDictionary *adData; // ivar: _adData
@property (readonly) NSDictionary *adResponseInUse;
@property NSInteger adResponseInUseType;
@property NSInteger adResponseInUseType_Int; // ivar: _adResponseInUseType_Int
@property (readonly) NSDictionary *allOdmlResponses; // ivar: _allOdmlResponses
@property (retain, nonatomic) NSDictionary *dupAdResponse; // ivar: _dupAdResponse
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSDictionary *noOrganicAdResponse; // ivar: _noOrganicAdResponse
@property (retain, nonatomic) NSDictionary *normalAdResponse; // ivar: _normalAdResponse
@property (readonly) APOdmlServerResponse *odmlResponse; // ivar: _odmlResponse


+(id)adResponseTypeToString:(NSInteger)arg0 ;
-(id)_jsonToDict:(id)arg0 error:(*id)arg1 ;
-(id)initWith:(id)arg0 andError:(id)arg1 ;
-(id)parseDataForAdResponse:(id)arg0 ;
-(id)parseDataForODMLResponse:(id)arg0 ;
-(void)parseResponseData;


@end


#endif
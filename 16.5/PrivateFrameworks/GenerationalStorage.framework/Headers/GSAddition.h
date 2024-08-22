// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GSADDITION_H
#define GSADDITION_H

@class NSNumber, NSString, NSDictionary, NSData, NSURL;
@protocol NSCopying><NSSecureCoding, GSAdditionStoring;

#import <Foundation/Foundation.h>


@interface GSAddition : NSObject {
    NSNumber *_size;
    NSString *_originalName;
    NSString *_displayName;
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isSavedConflict;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nameSpace; // ivar: _namespace
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSString *originalPOSIXName;
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;
@property (readonly, nonatomic) NSData *sandboxExtension;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly, nonatomic) NSObject<GSAdditionStoring> *storage; // ivar: _storage
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSDictionary *userInfo;


+(id)makeNameForUser:(unsigned int)arg0 name:(id)arg1 ;
-(BOOL)copyAdditionContentToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)internalStat:(struct stat *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeUserInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)refreshWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithStorage:(id)arg0 andDictionary:(id)arg1 ;
-(id)description;
-(id)displayNameWithError:(*id)arg0 ;
-(id)init;
-(id)originalPOSIXNameWithError:(*id)arg0 ;
-(id)replaceItemAtURL:(id)arg0 error:(*id)arg1 ;
-(id)userInfoWithError:(*id)arg0 ;
-(void)_refreshWithDictionary:(id)arg0 ;


@end


#endif
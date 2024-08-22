// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSFAVORITE_H
#define CLSFAVORITE_H

@class NSString, NSURL, NSArray;


#import "CLSObject.h"

@interface CLSFavorite : CLSObject {
    NSString *_title;
    NSString *_storeIdentifier;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *contentStoreIdentifier; // ivar: _contentStoreIdentifier
@property (retain, nonatomic) NSString *contextCustomTypeName; // ivar: _contextCustomTypeName
@property (retain, nonatomic) NSArray *contextIdentifierPath; // ivar: _contextIdentifierPath
@property (retain, nonatomic) NSString *contextSummary; // ivar: _contextSummary
@property (nonatomic) NSInteger contextType; // ivar: _contextType
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 URL:(id)arg1 andBundleIdentifier:(id)arg2 ;
-(id)initWithTitle:(id)arg0 context:(id)arg1 ;
-(id)initWithTitle:(id)arg0 contextIdentifierPath:(id)arg1 URL:(id)arg2 type:(int)arg3 contextType:(NSInteger)arg4 andBundleIdentifier:(id)arg5 contentStoreIdentifier:(id)arg6 contextSummary:(id)arg7 contextCustomTypeName:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
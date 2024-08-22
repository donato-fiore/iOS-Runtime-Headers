// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSINSTALLEDAPPINFO_H
#define TPSINSTALLEDAPPINFO_H

@class TPSSerializableObject, NSString;



@interface TPSInstalledAppInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *maxVersion; // ivar: _maxVersion
@property (copy, nonatomic) NSString *minVersion; // ivar: _minVersion


-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif
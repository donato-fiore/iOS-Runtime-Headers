// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSPLUGINQUERYWITHUNITS_H
#define LSPLUGINQUERYWITHUNITS_H

@class NSArray, NSUUID;


#import "LSPlugInQuery.h"

@interface LSPlugInQueryWithUnits : LSPlugInQuery {
    NSArray *_pluginUnits;
    NSUUID *_dbUUID;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlugInUnits:(id)arg0 forDatabaseWithUUID:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
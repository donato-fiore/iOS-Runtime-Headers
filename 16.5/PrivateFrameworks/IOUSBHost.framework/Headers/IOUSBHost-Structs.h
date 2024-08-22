typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct IOUSBHostCIMessage {
    unsigned int control;
    unsigned int data0;
    NSUInteger data1;
} IOUSBHostCIMessage;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct IOUSBDeviceDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned char field3;
    unsigned char field4;
    unsigned char field5;
    unsigned char field6;
    unsigned short field7;
    unsigned short field8;
    unsigned short field9;
    unsigned char field10;
    unsigned char field11;
    unsigned char field12;
    unsigned char field13;
} IOUSBDeviceDescriptor;

typedef struct IOUSBBOSDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned char field3;
} IOUSBBOSDescriptor;

typedef struct IOUSBConfigurationDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned char field3;
    unsigned char field4;
    unsigned char field5;
    unsigned char field6;
    unsigned char field7;
} IOUSBConfigurationDescriptor;

typedef struct IOUSBDescriptorHeader {
    unsigned char field0;
    unsigned char field1;
} IOUSBDescriptorHeader;

typedef struct IOUSBDeviceRequest {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
} IOUSBDeviceRequest;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct IOUSBInterfaceDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    unsigned char field5;
    unsigned char field6;
    unsigned char field7;
    unsigned char field8;
} IOUSBInterfaceDescriptor;

typedef struct IOUSBEndpointDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned short field4;
    unsigned char field5;
} IOUSBEndpointDescriptor;

typedef struct IOUSBSuperSpeedEndpointCompanionDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned short field4;
} IOUSBSuperSpeedEndpointCompanionDescriptor;

typedef struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
} IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor;

typedef struct IOUSBHostIOSourceDescriptors {
    unsigned short field0;
    IOUSBEndpointDescriptor field1;
    IOUSBSuperSpeedEndpointCompanionDescriptor field2;
    IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor field3;
} IOUSBHostIOSourceDescriptors;

typedef struct IOUSBHostIsochronousFrame {
    int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    NSUInteger field4;
} IOUSBHostIsochronousFrame;

typedef struct IOUSBHostIsochronousTransaction {
    int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    NSUInteger field4;
    unsigned int field5;
} IOUSBHostIsochronousTransaction;

